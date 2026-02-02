//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderExternalCommentModel : NSObject
{
    int _sourceScene;
    NSString *_postContent;
}

- (void).cxx_destruct;
@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(copy, nonatomic) NSString *postContent; // @synthesize postContent=_postContent;
- (_Bool)isValid;
- (id)initWithPostContent:(id)arg1 sourceScene:(int)arg2;

@end

