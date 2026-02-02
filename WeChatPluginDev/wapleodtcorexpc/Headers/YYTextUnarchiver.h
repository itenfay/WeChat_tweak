//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSKeyedUnarchiver.h>

@class NSString;

@interface YYTextUnarchiver : NSKeyedUnarchiver
{
}

+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)initForReadingWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

