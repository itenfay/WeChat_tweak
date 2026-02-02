//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol MMAssetPickerUserActionTipsProtocol;

@interface MMAssetPickerControllerState : NSObject
{
    _Bool _isPickerFinished;
    _Bool _isUserActionChecked;
    _Bool _isAsyncCompositeEnabled;
    _Bool _canHybridSendAsset;
    _Bool _disableVideoSelection;
    _Bool _canSendVideoMessage;
    _Bool _videoDirectToEdit;
    _Bool _canSendMultiImage;
    _Bool _canSendMultiVideo;
    _Bool _isHidePreviewPlayButton;
    _Bool _enforceUserActionCheck;
    _Bool _enforceUserActionUnCheck;
    _Bool _isUserActionSelected;
    _Bool _isCameraButtonDisabled;
    _Bool _buttonEnableAfterSend;
    _Bool _shouldShowFinderMJPublisherTemplateComposingButton;
    int _pickerScene;
    int _maxImageCount;
    long long _stateSource;
    NSArray *_selectedAssetInfoList;
    NSDictionary *_pickerExtMap;
    long long _selectedImageAssetCount;
    long long _selectedVideoAssetCount;
    double _selectedVideoSumDuration;
    long long _userActionCheckScene;
    NSString *_finishWording;
    NSString *_pickerBottomFloatText;
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MMAssetPickerUserActionTipsProtocol> userActionTipsActivity; // @synthesize userActionTipsActivity=_userActionTipsActivity;
@property(nonatomic) _Bool shouldShowFinderMJPublisherTemplateComposingButton; // @synthesize shouldShowFinderMJPublisherTemplateComposingButton=_shouldShowFinderMJPublisherTemplateComposingButton;
@property(retain, nonatomic) NSString *pickerBottomFloatText; // @synthesize pickerBottomFloatText=_pickerBottomFloatText;
@property(nonatomic) _Bool buttonEnableAfterSend; // @synthesize buttonEnableAfterSend=_buttonEnableAfterSend;
@property(nonatomic) _Bool isCameraButtonDisabled; // @synthesize isCameraButtonDisabled=_isCameraButtonDisabled;
@property(nonatomic) _Bool isUserActionSelected; // @synthesize isUserActionSelected=_isUserActionSelected;
@property(nonatomic) _Bool enforceUserActionUnCheck; // @synthesize enforceUserActionUnCheck=_enforceUserActionUnCheck;
@property(nonatomic) _Bool enforceUserActionCheck; // @synthesize enforceUserActionCheck=_enforceUserActionCheck;
@property(nonatomic) _Bool isHidePreviewPlayButton; // @synthesize isHidePreviewPlayButton=_isHidePreviewPlayButton;
@property(retain, nonatomic) NSString *finishWording; // @synthesize finishWording=_finishWording;
@property(nonatomic) _Bool canSendMultiVideo; // @synthesize canSendMultiVideo=_canSendMultiVideo;
@property(nonatomic) _Bool canSendMultiImage; // @synthesize canSendMultiImage=_canSendMultiImage;
@property(nonatomic) _Bool videoDirectToEdit; // @synthesize videoDirectToEdit=_videoDirectToEdit;
@property(nonatomic) _Bool canSendVideoMessage; // @synthesize canSendVideoMessage=_canSendVideoMessage;
@property(nonatomic) _Bool disableVideoSelection; // @synthesize disableVideoSelection=_disableVideoSelection;
@property(nonatomic) _Bool canHybridSendAsset; // @synthesize canHybridSendAsset=_canHybridSendAsset;
@property(nonatomic) int maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(readonly, nonatomic) _Bool isAsyncCompositeEnabled; // @synthesize isAsyncCompositeEnabled=_isAsyncCompositeEnabled;
@property(readonly, nonatomic) _Bool isUserActionChecked; // @synthesize isUserActionChecked=_isUserActionChecked;
@property(readonly, nonatomic) long long userActionCheckScene; // @synthesize userActionCheckScene=_userActionCheckScene;
@property(readonly, nonatomic) double selectedVideoSumDuration; // @synthesize selectedVideoSumDuration=_selectedVideoSumDuration;
@property(readonly, nonatomic) long long selectedVideoAssetCount; // @synthesize selectedVideoAssetCount=_selectedVideoAssetCount;
@property(readonly, nonatomic) long long selectedImageAssetCount; // @synthesize selectedImageAssetCount=_selectedImageAssetCount;
@property(readonly, nonatomic) NSDictionary *pickerExtMap; // @synthesize pickerExtMap=_pickerExtMap;
@property(readonly, nonatomic) NSArray *selectedAssetInfoList; // @synthesize selectedAssetInfoList=_selectedAssetInfoList;
@property(readonly, nonatomic) _Bool isPickerFinished; // @synthesize isPickerFinished=_isPickerFinished;
@property(readonly, nonatomic) long long stateSource; // @synthesize stateSource=_stateSource;
@property(readonly, nonatomic) int pickerScene; // @synthesize pickerScene=_pickerScene;
@property(readonly, nonatomic) _Bool isSelectionFull;

@end

