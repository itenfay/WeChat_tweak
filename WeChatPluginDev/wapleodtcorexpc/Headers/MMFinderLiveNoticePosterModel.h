//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeQRCodeResponse_PersonalColumnInfo, NSArray, NSDictionary, NSString, UIImage;

@interface MMFinderLiveNoticePosterModel : NSObject
{
    _Bool _invalidateStyles;
    _Bool _enableDescExtend;
    unsigned int _backgroundImageChangeDisablementFlag;
    int _modifyEntranceStatus;
    NSDictionary *_styledQrCodes;
    UIImage *_fallbackQrCode;
    NSString *_qrCodeContent;
    NSString *_backgroundImageUri;
    NSArray *_styles;
    NSString *_selectedStyleId;
    FinderLiveNoticeQRCodeResponse_PersonalColumnInfo *_columnInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableDescExtend; // @synthesize enableDescExtend=_enableDescExtend;
@property(nonatomic) int modifyEntranceStatus; // @synthesize modifyEntranceStatus=_modifyEntranceStatus;
@property(retain, nonatomic) FinderLiveNoticeQRCodeResponse_PersonalColumnInfo *columnInfo; // @synthesize columnInfo=_columnInfo;
@property(retain, nonatomic) NSString *selectedStyleId; // @synthesize selectedStyleId=_selectedStyleId;
@property(nonatomic) _Bool invalidateStyles; // @synthesize invalidateStyles=_invalidateStyles;
@property(retain, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(nonatomic) unsigned int backgroundImageChangeDisablementFlag; // @synthesize backgroundImageChangeDisablementFlag=_backgroundImageChangeDisablementFlag;
@property(retain, nonatomic) NSString *backgroundImageUri; // @synthesize backgroundImageUri=_backgroundImageUri;
@property(retain, nonatomic) NSString *qrCodeContent; // @synthesize qrCodeContent=_qrCodeContent;
@property(retain, nonatomic) UIImage *fallbackQrCode; // @synthesize fallbackQrCode=_fallbackQrCode;
@property(retain, nonatomic) NSDictionary *styledQrCodes; // @synthesize styledQrCodes=_styledQrCodes;
- (unsigned long long)qrCodeEcLevelForContent:(id)arg1;
- (id)initWithPreviewModel:(id)arg1;
- (id)initWithGenericLiveQrCodeResponse:(id)arg1;
- (id)initWithNoticeQrCodeResponse:(id)arg1;

@end

