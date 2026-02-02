//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaDashLineUIView, MMDynamicColor, NSString;

@interface KindaDashLineView
{
    float _m_dashWidth;
    KindaDashLineUIView *_m_dashLineView;
    MMDynamicColor *_m_dashColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMDynamicColor *m_dashColor; // @synthesize m_dashColor=_m_dashColor;
@property(nonatomic) float m_dashWidth; // @synthesize m_dashWidth=_m_dashWidth;
@property(retain, nonatomic) KindaDashLineUIView *m_dashLineView; // @synthesize m_dashLineView=_m_dashLineView;
- (void)setVertical:(_Bool)arg1;
- (_Bool)getVertical;
- (id)getDashColor;
- (void)setDashColor:(id)arg1;
- (float)getDashWidth;
- (void)setDashWidth:(float)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

