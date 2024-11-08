// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/5_2"
{
    Properties
    {
        _Color("Color", Color) = (1,1,1,1)
    }
    SubShader
    {
        pass
        {
            CGPROGRAM
            fixed4 _Color;

            struct a2v
            {
                float4 pos : POSITION;
                float3 normal : NORMAL;
                float4 textCoord : TEXCOORD0;
            };

            struct v2f
            {
                float4 pos : SV_POSITION;
                fixed3 color : COLOR0;
            };

            #pragma vertex vert
            #pragma fragment frag

            v2f vert(a2v o)
            {
                v2f r;
                r.pos = UnityObjectToClipPos(o.pos);
                r.color = o.normal * 0.5 + fixed3(0.5, 0.5, 0.5);
                return r;
            }

            fixed4 frag(v2f f):SV_Target
            {
                fixed3 color = f.color * _Color.rgb;
                return fixed4(color, 1.0);
            }

            ENDCG
        }
    }
}
