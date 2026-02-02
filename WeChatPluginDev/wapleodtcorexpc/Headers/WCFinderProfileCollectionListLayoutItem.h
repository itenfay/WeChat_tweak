//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCollectionInfo, NSString;

@interface WCFinderProfileCollectionListLayoutItem : NSObject
{
    FinderCollectionInfo *_userInfo;
    NSString *_displayText;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(retain, nonatomic) FinderCollectionInfo *userInfo; // @synthesize userInfo=_userInfo;

@end

