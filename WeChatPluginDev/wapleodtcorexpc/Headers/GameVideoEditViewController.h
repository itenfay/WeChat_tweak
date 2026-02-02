//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditVideoLogicItem, MMAsset, NSDictionary, NSNumber, NSString, UIImage, WAAppActionSheet;
@protocol GameVideoEditViewControllerDelegate;

@interface GameVideoEditViewController
{
    NSNumber *_videoFileSize;
    _Bool _needExtUrl;
    unsigned int _editFlag;
    int _choosId;
    long long _from;
    UIImage *_thumbImage;
    long long _ssid;
    unsigned long long _entranceType;
    id <GameVideoEditViewControllerDelegate> _videoEditDelegate;
    NSString *_videoPath;
    MMAsset *_asset;
    CDUnknownBlockType _callback;
    WAAppActionSheet *_actionSheet;
    NSDictionary *_options;
    EditVideoLogicItem *_editVideoLogicItem;
    unsigned long long _compostionStartTime;
    NSDictionary *_compositionProps;
}

+ (id)createWithCallback:(id)arg1 options:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)createWithAsset:(id)arg1 andDelegate:(id)arg2;
+ (id)createWithVideoPath:(id)arg1 andDelegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *compositionProps; // @synthesize compositionProps=_compositionProps;
@property(nonatomic) unsigned long long compostionStartTime; // @synthesize compostionStartTime=_compostionStartTime;
@property(retain, nonatomic) EditVideoLogicItem *editVideoLogicItem; // @synthesize editVideoLogicItem=_editVideoLogicItem;
@property(nonatomic) _Bool needExtUrl; // @synthesize needExtUrl=_needExtUrl;
@property(nonatomic) int choosId; // @synthesize choosId=_choosId;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) WAAppActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) __weak id <GameVideoEditViewControllerDelegate> videoEditDelegate; // @synthesize videoEditDelegate=_videoEditDelegate;
@property(nonatomic) unsigned int editFlag; // @synthesize editFlag=_editFlag;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) long long ssid; // @synthesize ssid=_ssid;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) long long from; // @synthesize from=_from;
- (unsigned long long)calculateCompostionDuration;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (void)recordVideoEditAttrForPost:(id)arg1;
- (id)buildCompositionProps:(id)arg1;
- (void)setupEditFlag:(id)arg1;
- (void)trackEventComposition:(_Bool)arg1 outputFile:(id)arg2;
- (void)trackEventNotEditResult:(id)arg1;
- (void)trackEventCancel;
- (void)trackEventExplosured;
- (void)onWAActionSheetDidDismiss;
- (void)onWAActionSheetWillDismiss;
- (void)onWAActionSheetInfoClicked;
- (void)onWAActionSheetDestruct;
- (void)onWAActionSheetClickStateView;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)arg1;
- (void)onWAActionSheetCancel;
- (id)menubuttonTitleArray;
- (void)showActionSheet;
- (void)showCompositionFailedTips;
- (void)handleUnkonwInputOnMainThread;
- (void)handleCompositionErrorWithMessage:(id)arg1;
- (void)notifyCompositionError:(int)arg1 errmsg:(id)arg2;
- (void)notifyResult:(int)arg1 dic:(id)arg2;
- (void)handleCompoitionSucceed:(id)arg1;
- (void)handleForNotEditSucceed:(id)arg1;
- (void)handleCompoitionResult:(_Bool)arg1 outFile:(id)arg2;
- (void)handleForVideoPath:(id)arg1;
- (void)handleForAsset:(id)arg1;
- (void)handleForNotEditVideoFile:(id)arg1 andRename:(id)arg2;
- (void)handleForNotEdit;
- (void)ifAssetHasOriginVideoThenDo:(CDUnknownBlockType)arg1 elseDo:(CDUnknownBlockType)arg2;
- (_Bool)isVideoSizeReachLimit;
- (void)compositeVideo;
- (float)getMaxDuration;
- (float)getMinDuration;
- (id)getButtonOptions;
- (id)getToolBars;
- (_Bool)inToolBars:(id)arg1;
- (_Bool)directToolBars;
- (id)currentViewController;
- (void)onClickEditVideoDoneBarButton;
- (void)onClickEditVideoBackBarButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initThumbView;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

