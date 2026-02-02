//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCTogetherDisplayInfo;

@interface WCTogetherDisplayText : NSObject
{
    _Bool _isRichText;
    WCTogetherDisplayInfo *_displayInfo;
    NSString *_togetherText;
    NSArray *_togetherUsers;
}

+ (id)displayTextFromDisplayInfo:(id)arg1 isRichText:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *togetherUsers; // @synthesize togetherUsers=_togetherUsers;
@property(readonly, copy, nonatomic) NSString *togetherText; // @synthesize togetherText=_togetherText;
@property(readonly, nonatomic) _Bool isRichText; // @synthesize isRichText=_isRichText;
@property(readonly, nonatomic) WCTogetherDisplayInfo *displayInfo; // @synthesize displayInfo=_displayInfo;
- (id)generateTextForContact:(id)arg1 isRichText:(_Bool)arg2;
- (id)generateFriendsTextForContacts:(id)arg1 isRichText:(_Bool)arg2;
- (void)generateTogetherText;

@end

