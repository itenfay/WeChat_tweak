//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOutputStream.h>

@interface NSOutputStream (Write)
- (long long)writeString:(id)arg1 offset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (long long)writeData:(id)arg1 offset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
@end

