//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TenpayLogHooker : NSObject
{
    CDUnknownBlockType logHooker;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType logHooker; // @synthesize logHooker;
- (void)writeLog:(id)arg1;
- (CDUnknownBlockType)getHooker;
- (void)setHooker:(CDUnknownBlockType)arg1;

@end

