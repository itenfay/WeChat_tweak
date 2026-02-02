//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MMImageDetectMediaInfo, NSString, WCMediaItem;

@interface MMImageDetectContext : NSObject
{
    unsigned int _dataType;
    unsigned int _businessType;
    unsigned int _svrScene;
    unsigned long long _sessionID;
    CMessageWrap *_msgWrap;
    WCMediaItem *_snsMediaItem;
    NSString *_imageFilePath;
    MMImageDetectMediaInfo *_detectMediaInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageDetectMediaInfo *detectMediaInfo; // @synthesize detectMediaInfo=_detectMediaInfo;
@property(retain, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(retain, nonatomic) WCMediaItem *snsMediaItem; // @synthesize snsMediaItem=_snsMediaItem;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) unsigned int svrScene; // @synthesize svrScene=_svrScene;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
- (id)generateImageInfoList:(id)arg1;
- (id)init;

@end

