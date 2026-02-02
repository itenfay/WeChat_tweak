//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMStringToastView;

@interface MMVoipToastWindow
{
    MMStringToastView *m_stringView;
    double _m_fixOriginX;
    long long _m_lastOrientation;
    struct CGRect m_fixRect;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_lastOrientation; // @synthesize m_lastOrientation=_m_lastOrientation;
@property(nonatomic) double m_fixOriginX; // @synthesize m_fixOriginX=_m_fixOriginX;
@property(nonatomic) struct CGRect m_fixRect; // @synthesize m_fixRect;
@property(retain, nonatomic) MMStringToastView *m_stringView; // @synthesize m_stringView;
- (void)rotateToOrientation:(long long)arg1;
- (void)statusBarDidRotate;
- (void)makeKeyWindow;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3 isDiff:(_Bool)arg4;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clearAllString;
- (void)clearCurrentString;
- (void)changeOriginY:(double)arg1;
- (void)dealloc;

@end

