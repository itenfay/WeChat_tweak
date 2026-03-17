//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"

@class NSString, POIInfo, UIView, WCFinderPOIParamsModel, WCFinderPOIRelatedStreamOpenParams;
@protocol WCFinderLocationPoiDetailViewDelegate;

@protocol IFinderPOIDetailViewController <WCFinderFeedBaseViewControllerProtocol>
@property(copy, nonatomic) NSString *groupBuyBypassData;
@property(retain, nonatomic) WCFinderPOIParamsModel *paramsModel;
@property(nonatomic) int commentScene;
@property(nonatomic) int enterScene;
@property(nonatomic) unsigned int reportScene;
@property(nonatomic) _Bool isFinderHalfScreen;
@property(nonatomic) _Bool isHoldHalfScreen;
@property(nonatomic) _Bool shouldPrefetchStream;
@property(nonatomic) _Bool showPoiDetail;
@property(nonatomic) _Bool showTakeCarBtn;
@property(readonly, nonatomic) _Bool needBkgDragAnimation;
@property(nonatomic) unsigned long long tabPageScene;
@property(readonly, nonatomic) _Bool isDragging;
@property(nonatomic) __weak id <WCFinderLocationPoiDetailViewDelegate> delegate;
@property(readonly, nonatomic) UIView *view;
- (void)updateFavSelected:(_Bool)arg1;
- (void)holdHalfScreenPOIView;
- (void)expandPOIView;
- (void)shrinkPOIView;
- (void)requestPoiStream;
- (void)requestPoiDetail;
- (void)copyAddressString;
- (_Bool)isFromNearbyLife;
- (_Bool)isExpand;
- (double)bottomGradientLayerHeight;
- (double)shrinkContentHeight;
- (void)setWcOrigin:(struct CGPoint)arg1;
- (id)initWithParams:(WCFinderPOIRelatedStreamOpenParams *)arg1;
- (id)initWith:(POIInfo *)arg1;
@end

