//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSKeyedArchiver;

@protocol NSKeyedArchiverDelegate <NSObject>

@optional
- (void)archiverDidFinish:(NSKeyedArchiver *)arg1;
- (void)archiverWillFinish:(NSKeyedArchiver *)arg1;
- (void)archiver:(NSKeyedArchiver *)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
- (void)archiver:(NSKeyedArchiver *)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(NSKeyedArchiver *)arg1 willEncodeObject:(id)arg2;
@end

