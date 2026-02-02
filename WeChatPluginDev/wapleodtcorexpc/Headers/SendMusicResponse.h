//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SendMusicResponse : NSObject
{
    NSString *_userName;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUserName:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toList;

@end

