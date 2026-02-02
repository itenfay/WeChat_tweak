//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderUserPageResponse, NSArray, NSData, WCFinderContact;

@interface WCFinderUserPageData : NSObject
{
    _Bool _isFirstPageRequest;
    _Bool _pullFromTop;
    _Bool _continueFlag;
    unsigned long long _topicId;
    NSArray *_dataArray;
    WCFinderContact *_contact;
    NSData *_lastBuffer;
    FinderUserPageResponse *_response;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderUserPageResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) _Bool pullFromTop; // @synthesize pullFromTop=_pullFromTop;
@property(nonatomic) _Bool isFirstPageRequest; // @synthesize isFirstPageRequest=_isFirstPageRequest;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;

@end

