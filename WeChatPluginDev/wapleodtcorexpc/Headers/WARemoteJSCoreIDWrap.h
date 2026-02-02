//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WARemoteJSCoreIDWrap : NSObject
{
    unsigned int _jscType;
    unsigned int _jscIndex;
    NSString *_jscID;
    NSString *_jscName;
}

+ (id)jscNameForType:(unsigned int)arg1 jscIndex:(unsigned int)arg2;
+ (id)jscIDForType:(unsigned int)arg1 jscIndex:(unsigned int)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int jscIndex; // @synthesize jscIndex=_jscIndex;
@property(nonatomic) unsigned int jscType; // @synthesize jscType=_jscType;
@property(copy, nonatomic) NSString *jscName; // @synthesize jscName=_jscName;
@property(copy, nonatomic) NSString *jscID; // @synthesize jscID=_jscID;
- (id)initWithType:(unsigned int)arg1 jscIndex:(unsigned int)arg2;

@end

