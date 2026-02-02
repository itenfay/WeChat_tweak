//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, RichTextView;

@interface WCAdDynamicFeedViewExtraClickJumpInfo : NSObject
{
    NSString *_richTextQuery;
    RichTextView *_richTextView;
    struct CGRect _richTextRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(nonatomic) struct CGRect richTextRect; // @synthesize richTextRect=_richTextRect;
@property(retain, nonatomic) NSString *richTextQuery; // @synthesize richTextQuery=_richTextQuery;

@end

