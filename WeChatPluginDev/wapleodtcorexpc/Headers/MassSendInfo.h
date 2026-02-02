//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CEmoticonWrap, CMessageWrap, CaptureVideoInfo, NSData, NSString, UIImage;

@interface MassSendInfo : NSObject
{
    NSString *m_nsToList;
    NSString *m_nsToListMD5;
    unsigned int m_uiMessageType;
    NSData *m_dtBuffer;
    unsigned int m_uiStartPos;
    unsigned int m_uiTotalLen;
    NSString *m_nsLocalID;
    unsigned int m_uiMediaTime;
    NSData *m_dtThumb;
    unsigned int m_uiThumbStartPos;
    unsigned int m_uiThumbTotalLen;
    unsigned int m_uiVideoSource;
    unsigned int m_uiCameraType;
    unsigned int m_uiToListCount;
    UIImage *m_image;
    NSString *m_nsText;
    CaptureVideoInfo *m_videoInfo;
    _Bool m_bDataSent;
    unsigned int m_uiIsSendAgain;
    unsigned int m_uiCompressType;
    unsigned int m_uiVoiceFormat;
    CEmoticonWrap *m_emoticonWrap;
    _Bool _hasUploadedToCDN;
    CMessageWrap *m_msgWrap;
    NSData *_m_originDtBuffer;
    NSString *_tmpFilePath;
    NSString *_tmpThumbPath;
    NSString *_tmpMiddlePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tmpMiddlePath; // @synthesize tmpMiddlePath=_tmpMiddlePath;
@property(retain, nonatomic) NSString *tmpThumbPath; // @synthesize tmpThumbPath=_tmpThumbPath;
@property(retain, nonatomic) NSString *tmpFilePath; // @synthesize tmpFilePath=_tmpFilePath;
@property(nonatomic) _Bool hasUploadedToCDN; // @synthesize hasUploadedToCDN=_hasUploadedToCDN;
@property(retain, nonatomic) NSData *m_originDtBuffer; // @synthesize m_originDtBuffer=_m_originDtBuffer;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(nonatomic) unsigned int m_uiVoiceFormat; // @synthesize m_uiVoiceFormat;
@property(nonatomic) unsigned int m_uiCompressType; // @synthesize m_uiCompressType;
@property(nonatomic) unsigned int m_uiIsSendAgain; // @synthesize m_uiIsSendAgain;
@property(nonatomic) unsigned int m_uiToListCount; // @synthesize m_uiToListCount;
@property(nonatomic) _Bool m_bDataSent; // @synthesize m_bDataSent;
@property(retain, nonatomic) CaptureVideoInfo *m_videoInfo; // @synthesize m_videoInfo;
@property(retain, nonatomic) NSString *m_nsText; // @synthesize m_nsText;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) unsigned int m_uiCameraType; // @synthesize m_uiCameraType;
@property(nonatomic) unsigned int m_uiThumbTotalLen; // @synthesize m_uiThumbTotalLen;
@property(nonatomic) unsigned int m_uiThumbStartPos; // @synthesize m_uiThumbStartPos;
@property(retain, nonatomic) NSData *m_dtThumb; // @synthesize m_dtThumb;
@property(nonatomic) unsigned int m_uiMediaTime; // @synthesize m_uiMediaTime;
@property(retain, nonatomic) NSString *m_nsLocalID; // @synthesize m_nsLocalID;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos;
@property(retain, nonatomic) NSData *m_dtBuffer; // @synthesize m_dtBuffer;
@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsToListMD5; // @synthesize m_nsToListMD5;
@property(retain, nonatomic) NSString *m_nsToList; // @synthesize m_nsToList;
- (void)dealloc;
- (id)init;

@end

