//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol OMJTemplateServiceProvider <NSObject>
- (void)requestTemplateMetadataWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(OMJTemplateMetadata *))arg2;
@end

