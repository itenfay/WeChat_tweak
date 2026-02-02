//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAEJTexture;

@interface WAEJCanvasPattern : NSObject
{
    WAEJTexture *texture;
    int repeat;
}

@property(readonly, nonatomic) int repeat; // @synthesize repeat;
@property(readonly, nonatomic) WAEJTexture *texture; // @synthesize texture;
- (void)dealloc;
- (id)initWithTexture:(id)arg1 repeat:(int)arg2;

@end

