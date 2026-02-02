//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, TextViewData;

@interface PayManageSection : NSObject
{
    NSArray *_extra_labels;
    TextViewData *_header;
    TextViewData *_footer;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain) TextViewData *footer; // @synthesize footer=_footer;
@property(retain) TextViewData *header; // @synthesize header=_header;
@property(retain) NSArray *extra_labels; // @synthesize extra_labels=_extra_labels;

@end

