//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BakChatMsgList, NSArray, NSMutableArray, NSString;

@interface WXGBackupDataInfo : NSObject
{
    _Bool _needMedia;
    _Bool _fromOldToNew;
    _Bool _filterMsgForChatSync;
    int _dataInfoSize;
    int _limitMsgCount;
    long long _startTime;
    long long _endTime;
    NSString *_sessionName;
    NSString *_msgListID;
    BakChatMsgList *_bakChatMsgList;
    NSMutableArray *_bakChatMsgWrapList;
    NSArray *_bigDataArray;
    NSArray *_mediaDataArray;
    NSArray *_mediaIDArray;
    NSString *_nickName;
    NSMutableArray *_limitMsgTypeArray;
    NSArray *_needMediaTypeArray;
    long long _mediaFormatSupport;
}

- (void).cxx_destruct;
@property(nonatomic) long long mediaFormatSupport; // @synthesize mediaFormatSupport=_mediaFormatSupport;
@property(nonatomic) _Bool filterMsgForChatSync; // @synthesize filterMsgForChatSync=_filterMsgForChatSync;
@property(nonatomic) _Bool fromOldToNew; // @synthesize fromOldToNew=_fromOldToNew;
@property(retain, nonatomic) NSArray *needMediaTypeArray; // @synthesize needMediaTypeArray=_needMediaTypeArray;
@property(nonatomic) _Bool needMedia; // @synthesize needMedia=_needMedia;
@property(retain, nonatomic) NSMutableArray *limitMsgTypeArray; // @synthesize limitMsgTypeArray=_limitMsgTypeArray;
@property(nonatomic) int limitMsgCount; // @synthesize limitMsgCount=_limitMsgCount;
@property(nonatomic) int dataInfoSize; // @synthesize dataInfoSize=_dataInfoSize;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSArray *mediaIDArray; // @synthesize mediaIDArray=_mediaIDArray;
@property(retain, nonatomic) NSArray *mediaDataArray; // @synthesize mediaDataArray=_mediaDataArray;
@property(retain, nonatomic) NSArray *bigDataArray; // @synthesize bigDataArray=_bigDataArray;
@property(retain, nonatomic) NSMutableArray *bakChatMsgWrapList; // @synthesize bakChatMsgWrapList=_bakChatMsgWrapList;
@property(retain, nonatomic) BakChatMsgList *bakChatMsgList; // @synthesize bakChatMsgList=_bakChatMsgList;
@property(retain, nonatomic) NSString *msgListID; // @synthesize msgListID=_msgListID;
@property(retain, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (id)init;

@end

