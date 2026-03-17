//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TBMapCommonCounter : NSObject
{
    int _mapCount;
}

@property(nonatomic) int mapCount; // @synthesize mapCount=_mapCount;
- (int)getAndReset;
- (void)increase;
- (id)init;

@end

