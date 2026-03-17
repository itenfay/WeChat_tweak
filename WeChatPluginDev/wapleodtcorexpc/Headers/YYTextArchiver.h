//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSKeyedArchiver.h>

@class NSString;

@interface YYTextArchiver : NSKeyedArchiver
{
}

+ (_Bool)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)initForWritingWithMutableData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

