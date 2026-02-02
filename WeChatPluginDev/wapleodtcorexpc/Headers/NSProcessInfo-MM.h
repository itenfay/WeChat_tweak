//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProcessInfo.h>

@interface NSProcessInfo (MM)
+ (void)load;
- (id)mm_processName;
- (void)mm_modifyContainerEnvironmentVariables;
@end

