//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMResourceDownloadDelegate;

@protocol MMResourceDownloader <NSObject>
@property(retain, nonatomic) NSString *downloadIdentifier;
@property(nonatomic) __weak id <MMResourceDownloadDelegate> downloadDelegate;
- (void)clearData;
- (void)cancel;
- (void)start;
- (id)initWithUrl:(NSString *)arg1;
@end

