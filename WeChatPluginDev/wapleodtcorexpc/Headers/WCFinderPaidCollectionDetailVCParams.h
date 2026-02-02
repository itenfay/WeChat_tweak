//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPaidCollectionInfo, NSString;

@interface WCFinderPaidCollectionDetailVCParams : NSObject
{
    _Bool _halfScreen;
    _Bool _autoStartPurchase;
    _Bool _authorScene;
    int _commentScene;
    FinderPaidCollectionInfo *_paidCollectionInfo;
    NSString *_sourceFeedID;
    NSString *_authorFinderUsername;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(nonatomic) _Bool authorScene; // @synthesize authorScene=_authorScene;
@property(nonatomic) _Bool autoStartPurchase; // @synthesize autoStartPurchase=_autoStartPurchase;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *authorFinderUsername; // @synthesize authorFinderUsername=_authorFinderUsername;
@property(copy, nonatomic) NSString *sourceFeedID; // @synthesize sourceFeedID=_sourceFeedID;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo; // @synthesize paidCollectionInfo=_paidCollectionInfo;
@property(nonatomic) _Bool halfScreen; // @synthesize halfScreen=_halfScreen;

@end

