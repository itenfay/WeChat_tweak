//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderEnterSourceReportInfoModel : NSObject
{
    NSString *_enterSourceFeedIDStr;
    NSString *_enterSourceUserStr;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *enterSourceUserStr; // @synthesize enterSourceUserStr=_enterSourceUserStr;
@property(copy, nonatomic) NSString *enterSourceFeedIDStr; // @synthesize enterSourceFeedIDStr=_enterSourceFeedIDStr;
- (id)reportJSONStr;
- (id)init;

@end

