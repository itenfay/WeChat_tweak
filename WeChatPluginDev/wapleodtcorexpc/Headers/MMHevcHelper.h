//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMHevcHelper : NSObject
{
    unsigned int _idKeyID;
    NSMutableArray *_idKeys;
    NSString *_imgUrl;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) unsigned int idKeyID; // @synthesize idKeyID=_idKeyID;
@property(retain, nonatomic) NSMutableArray *idKeys; // @synthesize idKeys=_idKeys;
- (void)reportKvStat:(unsigned int)arg1 value:(id)arg2;
- (void)flushIdKeyEvent:(_Bool)arg1;
- (void)reportIdKeyEvent:(unsigned long long)arg1 value:(unsigned int)arg2;
- (void)reportIdKeyEvent:(unsigned long long)arg1;
- (id)initWithIdKeyId:(unsigned int)arg1 imgUrl:(id)arg2;

@end

