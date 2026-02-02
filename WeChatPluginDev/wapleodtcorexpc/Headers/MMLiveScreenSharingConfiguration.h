//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveScreenSharingConfiguration
{
    long long _centerXSideOfCameraToScreen;
    double _centerYRatioOfCameraToScreen;
    struct CGSize _sizeOfScreen;
}

@property(nonatomic) double centerYRatioOfCameraToScreen; // @synthesize centerYRatioOfCameraToScreen=_centerYRatioOfCameraToScreen;
@property(nonatomic) long long centerXSideOfCameraToScreen; // @synthesize centerXSideOfCameraToScreen=_centerXSideOfCameraToScreen;
@property(nonatomic) struct CGSize sizeOfScreen; // @synthesize sizeOfScreen=_sizeOfScreen;
- (double)cameraBottommostYForOrientation:(_Bool)arg1 centerXSide:(long long)arg2 inView:(id)arg3;
- (double)cameraToppestYForOrientation:(_Bool)arg1 centerXSide:(long long)arg2 inView:(id)arg3;
@property(readonly, nonatomic) double marginXRatioOfCameraToScreen;
@property(readonly, nonatomic) double sizeRatioOfCameraToScreen;
@property(readonly, nonatomic) double aspectRatioOfCamera;
@property(readonly, nonatomic) _Bool showsCameraOnlyInMinimizeMode;
@property(readonly, nonatomic) _Bool SEIAnchorStatusWithScreenSharingIncompatible;
@property(nonatomic) _Bool showsScreenSharingEntranceInOperationView;
@property(readonly, nonatomic) _Bool canShareScreen;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

