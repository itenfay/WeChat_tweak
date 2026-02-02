//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCanvasComponent, WCCanvasComponentItem;

@interface WCCanvasFloatActionBaseView
{
    WCCanvasComponentItem *_componentItem;
    WCCanvasComponent *_component;
    long long _orientation;
}

+ (id)viewWithFrame:(struct CGRect)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) WCCanvasComponent *component; // @synthesize component=_component;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
- (_Bool)isComponentVisible;
- (void)setActionViewHidden:(_Bool)arg1 animation:(_Bool)arg2;
- (void)notifyComponentReportAddExposureCount;
- (void)notifyComponentStatusChanged:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;

@end

