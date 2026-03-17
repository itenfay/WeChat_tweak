//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GCFirstTimeMarker : NSObject
{
    _Bool _firstTimeAccess;
}

@property(nonatomic) _Bool firstTimeAccess; // @synthesize firstTimeAccess=_firstTimeAccess;
- (_Bool)isFirstTimeAccess;
- (id)init;

@end

