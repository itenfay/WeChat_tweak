//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderPostPrevDataModel;

@interface WCFinderPostUsualTopicLogic : NSObject
{
    WCFinderPostPrevDataModel *_prevDataModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPostPrevDataModel *prevDataModel; // @synthesize prevDataModel=_prevDataModel;
- (id)filterUsualTopicModel:(id)arg1;
- (void)fetchPostUsualTopicData;

@end

