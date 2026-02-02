//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMTimer, NSArray, NSMutableArray, NSMutableAttributedString, UITextPosition, UIView, WNContentStorage, WNSaveImageConfiguration, WNSaveImageReportDataModel, WNTextView;
@protocol WNSaveImageLogicDataSource;

@interface WNSaveImageLogic
{
    id <WNSaveImageLogicDataSource> m_dataController;
    MMTableView *m_tableView;
    WNContentStorage *m_storage;
    _Bool *m_forceLoadImage;
    unsigned long long m_squareImagesCount;
    _Bool m_needReload;
    NSMutableArray *m_arrMaxFontSize;
    NSArray *m_currentSquareViews;
    _Bool _bSquareImageEnable;
    NSArray *_arrDataSource;
    UIView *_currentLongNoteView;
    NSMutableAttributedString *_allContent;
    WNSaveImageConfiguration *_config;
    WNSaveImageConfiguration *_lastConfig;
    WNSaveImageReportDataModel *_reportData;
    MMTimer *_saveTimer;
    long long _curIndex;
    double _curOffset;
    NSMutableArray *_arrSaveImages;
    WNTextView *_curSaveView;
    UITextPosition *_lastSavePos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextPosition *lastSavePos; // @synthesize lastSavePos=_lastSavePos;
@property(retain, nonatomic) WNTextView *curSaveView; // @synthesize curSaveView=_curSaveView;
@property(retain, nonatomic) NSMutableArray *arrSaveImages; // @synthesize arrSaveImages=_arrSaveImages;
@property(nonatomic) double curOffset; // @synthesize curOffset=_curOffset;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(retain, nonatomic) MMTimer *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(nonatomic) _Bool bSquareImageEnable; // @synthesize bSquareImageEnable=_bSquareImageEnable;
@property(retain, nonatomic) WNSaveImageReportDataModel *reportData; // @synthesize reportData=_reportData;
@property(retain, nonatomic) WNSaveImageConfiguration *lastConfig; // @synthesize lastConfig=_lastConfig;
@property(retain, nonatomic) WNSaveImageConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableAttributedString *allContent; // @synthesize allContent=_allContent;
@property(retain, nonatomic) UIView *currentLongNoteView; // @synthesize currentLongNoteView=_currentLongNoteView;
@property(retain, nonatomic) NSArray *arrDataSource; // @synthesize arrDataSource=_arrDataSource;
- (void)updateReportData:(int)arg1;
- (void)reportSaveResult:(unsigned long long)arg1;
- (void)updateReportDataDownloadStatus:(unsigned long long)arg1;
- (void)updateDefaultReportData:(unsigned int)arg1 andSource:(unsigned long long)arg2;
- (void)stopTimer;
- (void)startTimerWithInterval:(double)arg1 andSelector:(SEL)arg2;
- (_Bool)isInDarkMode;
- (id)getAttachmentViewProviderWithImageType:(long long)arg1 andColorType:(unsigned long long)arg2;
- (id)getAttachmentViewProvider;
- (id)getRenderImageFromView:(id)arg1;
- (void)updateMutableAttributedString:(id)arg1 withFont:(id)arg2;
- (id)creatRTETextViewForAttributedText:(id)arg1 withProvider:(id)arg2;
- (id)creatRTETextViewForAttributedText:(id)arg1;
- (void)saveSquareNoteImages:(id)arg1;
- (void)continueSaveSquareImage;
- (void)saveSquareImageThroughTimer;
- (void)beginSaveSquareImage;
- (void)checkMaxFontSize:(id)arg1;
- (id)getSquareViewFromAttributedString:(id)arg1 needCheckMaxFontSize:(_Bool)arg2;
- (id)getSquareViewAttributedString;
- (void)initNoteViewStateWith:(id)arg1;
- (id)getTableViewSquarePreview;
- (id)getSquareNoteViews;
- (void)saveLongNoteImage:(id)arg1;
- (void)continueSaveLongNoteImage;
- (void)saveImageThroughTimer;
- (void)beginSaveLongNoteImage;
- (id)getLongTableViewTextView:(double)arg1;
- (id)getLongNoteView;
- (_Bool)getSquareImageEnable;
- (void)preCheckSquareImageEnableWithFont;
- (void)preCheckSquareImageEnable;
- (void)disableForceLoadImage;
- (_Bool)currentForceLoadState;
- (void)saveImage;
- (long long)getCurrentMaxFontSize;
- (id)getArrSelectedIndex;
- (id)getNewFooterViewForIndex:(long long)arg1 andImagesCount:(long long)arg2;
- (id)getHeaderView;
- (void)updateSelectedType:(long long)arg1 atIndex:(long long)arg2;
- (void)updateTextAlignment:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBackgourndImage:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateFontName:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateImageType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recordCurrentStateNeedUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNoteViewController:(id)arg1 withTableView:(id)arg2 andStorage:(id)arg3 andVisibHeight:(double)arg4 andSquareHeight:(double)arg5 andForceLoadImage:(_Bool *)arg6;

@end

