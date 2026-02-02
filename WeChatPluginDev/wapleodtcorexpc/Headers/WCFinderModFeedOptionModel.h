//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderModFeedOptionModel : NSObject
{
    unsigned int _actionScene;
    NSString *_contentDesp;
    NSString *_coverUrl;
    NSString *_fullCoverUrl;
    NSMutableArray *_coverUrlWord;
    NSMutableArray *_shortTitleArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *shortTitleArray; // @synthesize shortTitleArray=_shortTitleArray;
@property(copy, nonatomic) NSMutableArray *coverUrlWord; // @synthesize coverUrlWord=_coverUrlWord;
@property(copy, nonatomic) NSString *fullCoverUrl; // @synthesize fullCoverUrl=_fullCoverUrl;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *contentDesp; // @synthesize contentDesp=_contentDesp;
@property(nonatomic) unsigned int actionScene; // @synthesize actionScene=_actionScene;
- (id)description;
- (id)init;

@end

