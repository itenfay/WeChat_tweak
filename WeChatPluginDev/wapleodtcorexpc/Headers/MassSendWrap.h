//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CEmoticonWrap, CaptureVideoInfo, NSArray, NSData, NSString, UIImage, WCFinderDataItem;

@interface MassSendWrap : NSObject
{
    unsigned int m_uiMessageType;
    NSArray *m_arrayToList;
    NSString *m_nsText;
    UIImage *m_image;
    NSData *m_dtImage;
    NSData *m_dtVoice;
    unsigned int m_uiVoiceTime;
    unsigned int m_uiVoiceTmpID;
    NSString *m_nsChatName;
    unsigned int m_uiMesLocalID;
    unsigned int m_uiIsSendAgain;
    CaptureVideoInfo *m_oVideoInfo;
    unsigned int m_uiCreateTime;
    unsigned int m_voiceFormat;
    unsigned int m_uiUploadStatus;
    NSString *m_nsUsrNameList;
    NSString *m_nsFileMD5;
    CEmoticonWrap *_emoticonWrap;
    WCFinderDataItem *_finderDataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) NSString *m_nsFileMD5; // @synthesize m_nsFileMD5;
@property(retain, nonatomic) NSString *m_nsUsrNameList; // @synthesize m_nsUsrNameList;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus;
@property(nonatomic) unsigned int m_voiceFormat; // @synthesize m_voiceFormat;
@property(nonatomic) unsigned int m_uiIsSendAgain; // @synthesize m_uiIsSendAgain;
@property(nonatomic) unsigned int m_uiVoiceTmpID; // @synthesize m_uiVoiceTmpID;
@property(nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) CaptureVideoInfo *m_oVideoInfo; // @synthesize m_oVideoInfo;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice;
@property(retain, nonatomic) NSData *m_dtImage; // @synthesize m_dtImage;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
@property(retain, nonatomic) NSString *m_nsText; // @synthesize m_nsText;
@property(retain, nonatomic) NSArray *m_arrayToList; // @synthesize m_arrayToList;
@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
- (void)dealloc;
- (id)init;

@end

