/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKRouteDrawStyle : VKRenderStyle {
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } _fillColor;
    } _travelledColor;
    } _width;
}

@property(readonly) float arrowMinZoom;
@property(readonly) float brightness;
@property(readonly) float enlargementMaxScale;
@property(readonly) float enlargementScale;
@property(readonly) float enlargementStartZoom;
@property(readonly) BOOL hasBrightness;
@property(readonly) BOOL hasFillColor;
@property(readonly) BOOL hasObscuredTexture;
@property(readonly) BOOL hasTexture;
@property(readonly) BOOL hasTravelledTexture;
@property(readonly) NSString * obscuredTexture;
@property(readonly) float selectedArrowMinZoom;
@property(readonly) NSString * texture;
@property(readonly) NSString * travelledTexture;

+ (int)renderStyleID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)arrowMinZoom;
- (float)brightness;
- (float)enlargementMaxScale;
- (float)enlargementScale;
- (float)enlargementStartZoom;
- (struct Matrix<float, 4, 1> { float x1[4]; })fillColor;
- (unsigned long long)fillDashPatternAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })glossColor;
- (BOOL)hasBrightness;
- (BOOL)hasDashAtAnyZ;
- (BOOL)hasFillColor;
- (BOOL)hasObscuredTexture;
- (BOOL)hasTexture;
- (BOOL)hasTravelledTexture;
- (id)obscuredTexture;
- (float)selectedArrowMinZoom;
- (struct Matrix<float, 4, 1> { float x1[4]; })strokeColor;
- (float)strokeWidth;
- (id)texture;
- (struct Matrix<float, 4, 1> { float x1[4]; })travelledColor;
- (id)travelledTexture;
- (float)width;

@end
