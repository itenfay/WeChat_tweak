//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol NSItemProviderReading <NSObject>
+ (NSArray *)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(NSData *)arg1 typeIdentifier:(NSString *)arg2 error:(id *)arg3;
@end

