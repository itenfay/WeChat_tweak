//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSArray.h>
typedef void (^CDUnknownBlockType)(void);

@interface NSArray (GCArrayMap)
- (id)gcMapObjectsUsingBlock:(CDUnknownBlockType)arg1;
@end
