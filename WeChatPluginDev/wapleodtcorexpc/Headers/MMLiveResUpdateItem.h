//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMLiveResUpdateItem : NSObject
{
    unsigned int _resType;
    NSArray *_subTypes;
    NSString *_resBaseDir;
    NSString *_manifestFile;
}

+ (id)resItemWithResType:(unsigned int)arg1 resBaseDir:(id)arg2;
+ (id)resItemWithResType:(unsigned int)arg1 subTypes:(id)arg2 resBaseDir:(id)arg3 manifestFile:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *manifestFile; // @synthesize manifestFile=_manifestFile;
@property(retain, nonatomic) NSString *resBaseDir; // @synthesize resBaseDir=_resBaseDir;
@property(retain, nonatomic) NSArray *subTypes; // @synthesize subTypes=_subTypes;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;

@end

