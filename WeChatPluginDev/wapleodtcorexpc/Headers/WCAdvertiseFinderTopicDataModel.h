//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdvertiseFinderTopicDataModel : NSObject
{
    NSString *_relationText;
    NSArray *_finderTopicResList;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *finderTopicResList; // @synthesize finderTopicResList=_finderTopicResList;
@property(retain, nonatomic) NSString *relationText; // @synthesize relationText=_relationText;

@end

