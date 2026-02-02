//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem26636
{
    unsigned int _mode_21;
    unsigned int _ret_22;
    unsigned int _imageSize_23;
    unsigned int _predictSize_24;
    unsigned int _availableMem_25;
    unsigned int _contentWidth_26;
    unsigned int _contentHeight_27;
    unsigned int _isCompress_29;
    unsigned int _costTime_30;
    unsigned int _delayTime_31;
    unsigned int _imageWidth_32;
    unsigned int _imageHeight_33;
    unsigned int _realImageMem_35;
    unsigned int _predictImageMem_36;
    unsigned int _eventType_38;
    unsigned int _cropByLimitHeight_40;
    unsigned int _originContentWidth_41;
    unsigned int _originContentHeight_42;
    unsigned int _hasEditCrop_43;
    unsigned int _isDregradePrinterMode_44;
    NSString *_scaleFactor_28;
    NSString *_pageUrl_34;
    NSString *_errMsg_37;
    NSString *_sessionId_39;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int isDregradePrinterMode_44; // @synthesize isDregradePrinterMode_44=_isDregradePrinterMode_44;
@property(nonatomic) unsigned int hasEditCrop_43; // @synthesize hasEditCrop_43=_hasEditCrop_43;
@property(nonatomic) unsigned int originContentHeight_42; // @synthesize originContentHeight_42=_originContentHeight_42;
@property(nonatomic) unsigned int originContentWidth_41; // @synthesize originContentWidth_41=_originContentWidth_41;
@property(nonatomic) unsigned int cropByLimitHeight_40; // @synthesize cropByLimitHeight_40=_cropByLimitHeight_40;
@property(copy, nonatomic) NSString *sessionId_39; // @synthesize sessionId_39=_sessionId_39;
@property(nonatomic) unsigned int eventType_38; // @synthesize eventType_38=_eventType_38;
@property(copy, nonatomic) NSString *errMsg_37; // @synthesize errMsg_37=_errMsg_37;
@property(nonatomic) unsigned int predictImageMem_36; // @synthesize predictImageMem_36=_predictImageMem_36;
@property(nonatomic) unsigned int realImageMem_35; // @synthesize realImageMem_35=_realImageMem_35;
@property(copy, nonatomic) NSString *pageUrl_34; // @synthesize pageUrl_34=_pageUrl_34;
@property(nonatomic) unsigned int imageHeight_33; // @synthesize imageHeight_33=_imageHeight_33;
@property(nonatomic) unsigned int imageWidth_32; // @synthesize imageWidth_32=_imageWidth_32;
@property(nonatomic) unsigned int delayTime_31; // @synthesize delayTime_31=_delayTime_31;
@property(nonatomic) unsigned int costTime_30; // @synthesize costTime_30=_costTime_30;
@property(nonatomic) unsigned int isCompress_29; // @synthesize isCompress_29=_isCompress_29;
@property(copy, nonatomic) NSString *scaleFactor_28; // @synthesize scaleFactor_28=_scaleFactor_28;
@property(nonatomic) unsigned int contentHeight_27; // @synthesize contentHeight_27=_contentHeight_27;
@property(nonatomic) unsigned int contentWidth_26; // @synthesize contentWidth_26=_contentWidth_26;
@property(nonatomic) unsigned int availableMem_25; // @synthesize availableMem_25=_availableMem_25;
@property(nonatomic) unsigned int predictSize_24; // @synthesize predictSize_24=_predictSize_24;
@property(nonatomic) unsigned int imageSize_23; // @synthesize imageSize_23=_imageSize_23;
@property(nonatomic) unsigned int ret_22; // @synthesize ret_22=_ret_22;
@property(nonatomic) unsigned int mode_21; // @synthesize mode_21=_mode_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

