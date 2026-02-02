//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMImagePickerReportInfo
{
    _Bool _isOriginalImage;
    _Bool _isFinalSend;
    _Bool _hasPreviewSelected;
    _Bool _hasOrderSelectedInPreviewAll;
    _Bool _hasClickSelectedInPreviewAll;
    _Bool _hasOrderSelectedInPreviewSelected;
    _Bool _hasClickSelectedInPreviewSelected;
    _Bool _hasSwitchAlbum;
    _Bool _isUseSlider;
    int _pickerScene;
    int _selectedPicCount;
    int _selectedGifCount;
    int _selectedVideoCount;
    int _sendImageCountFromDragSelect;
    int _sendVideoCountFromDragSelect;
    NSString *_sendSessionID;
    long long _finalFinishScene;
    long long _sendPicCountFromDefault;
    long long _sendPicCountFromOther;
    unsigned long long _startTimeStamp;
    NSMutableArray *_assetReportInfos;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUseSlider; // @synthesize isUseSlider=_isUseSlider;
@property(retain, nonatomic) NSMutableArray *assetReportInfos; // @synthesize assetReportInfos=_assetReportInfos;
@property(nonatomic) unsigned long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(nonatomic) long long sendPicCountFromOther; // @synthesize sendPicCountFromOther=_sendPicCountFromOther;
@property(nonatomic) long long sendPicCountFromDefault; // @synthesize sendPicCountFromDefault=_sendPicCountFromDefault;
@property(nonatomic) _Bool hasSwitchAlbum; // @synthesize hasSwitchAlbum=_hasSwitchAlbum;
@property(nonatomic) _Bool hasClickSelectedInPreviewSelected; // @synthesize hasClickSelectedInPreviewSelected=_hasClickSelectedInPreviewSelected;
@property(nonatomic) _Bool hasOrderSelectedInPreviewSelected; // @synthesize hasOrderSelectedInPreviewSelected=_hasOrderSelectedInPreviewSelected;
@property(nonatomic) _Bool hasClickSelectedInPreviewAll; // @synthesize hasClickSelectedInPreviewAll=_hasClickSelectedInPreviewAll;
@property(nonatomic) _Bool hasOrderSelectedInPreviewAll; // @synthesize hasOrderSelectedInPreviewAll=_hasOrderSelectedInPreviewAll;
@property(nonatomic) _Bool hasPreviewSelected; // @synthesize hasPreviewSelected=_hasPreviewSelected;
@property(nonatomic) _Bool isFinalSend; // @synthesize isFinalSend=_isFinalSend;
@property(nonatomic) _Bool isOriginalImage; // @synthesize isOriginalImage=_isOriginalImage;
@property(nonatomic) int sendVideoCountFromDragSelect; // @synthesize sendVideoCountFromDragSelect=_sendVideoCountFromDragSelect;
@property(nonatomic) int sendImageCountFromDragSelect; // @synthesize sendImageCountFromDragSelect=_sendImageCountFromDragSelect;
@property(nonatomic) int selectedVideoCount; // @synthesize selectedVideoCount=_selectedVideoCount;
@property(nonatomic) int selectedGifCount; // @synthesize selectedGifCount=_selectedGifCount;
@property(nonatomic) int selectedPicCount; // @synthesize selectedPicCount=_selectedPicCount;
@property(nonatomic) long long finalFinishScene; // @synthesize finalFinishScene=_finalFinishScene;
@property(nonatomic) int pickerScene; // @synthesize pickerScene=_pickerScene;
@property(retain, nonatomic) NSString *sendSessionID; // @synthesize sendSessionID=_sendSessionID;

@end

