//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QBWebDebugConfig : NSObject
{
    _Bool _isLive;
    NSString *_businessID;
    NSString *_randomKey;
}

+ (id)configWithURL:(id)arg1;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) NSString *randomKey; // @synthesize randomKey=_randomKey;
@property(retain, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
- (void).cxx_destruct;

@end

