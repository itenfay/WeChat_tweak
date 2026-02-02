//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMCacheClassification : NSObject
{
    unsigned int _classifyType;
    NSString *_classID;
    unsigned long long _cacheSize;
    CDUnknownBlockType _cleanBlock;
    NSString *_nickName;
    NSMutableArray *_childClassification;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *childClassification; // @synthesize childClassification=_childClassification;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) CDUnknownBlockType cleanBlock; // @synthesize cleanBlock=_cleanBlock;
@property(nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(nonatomic) unsigned int classifyType; // @synthesize classifyType=_classifyType;
@property(copy, nonatomic) NSString *classID; // @synthesize classID=_classID;
- (id)classifyName;
- (_Bool)isEqual:(id)arg1;

@end

