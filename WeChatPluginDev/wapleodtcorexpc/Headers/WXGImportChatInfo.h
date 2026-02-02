//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WXGImportChatInfo : NSObject
{
    unsigned int _msgMaxTime;
    unsigned int _msgMinTime;
    unsigned int _mediaCount;
    NSString *_bakChatName;
    unsigned long long _msgCount;
    unsigned long long _msgListCount;
    unsigned long long _msgFilterCount;
    unsigned long long _msgSpecialCount;
    unsigned long long _msgLocalExistCount;
    NSMutableDictionary *_mediaCntInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mediaCntInfo; // @synthesize mediaCntInfo=_mediaCntInfo;
@property(nonatomic) unsigned int mediaCount; // @synthesize mediaCount=_mediaCount;
@property(nonatomic) unsigned int msgMinTime; // @synthesize msgMinTime=_msgMinTime;
@property(nonatomic) unsigned int msgMaxTime; // @synthesize msgMaxTime=_msgMaxTime;
@property(nonatomic) unsigned long long msgLocalExistCount; // @synthesize msgLocalExistCount=_msgLocalExistCount;
@property(nonatomic) unsigned long long msgSpecialCount; // @synthesize msgSpecialCount=_msgSpecialCount;
@property(nonatomic) unsigned long long msgFilterCount; // @synthesize msgFilterCount=_msgFilterCount;
@property(nonatomic) unsigned long long msgListCount; // @synthesize msgListCount=_msgListCount;
@property(nonatomic) unsigned long long msgCount; // @synthesize msgCount=_msgCount;
@property(copy, nonatomic) NSString *bakChatName; // @synthesize bakChatName=_bakChatName;
- (id)brief;
- (void)addMediaForMediaType:(unsigned int)arg1;
- (id)init;

@end

