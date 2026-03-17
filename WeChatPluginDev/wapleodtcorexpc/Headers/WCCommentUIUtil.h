//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCommentUIUtil : NSObject
{
}

+ (_Bool)isDisplayFlagInsteadOfRealContent:(id)arg1;
+ (id)getDisplayName:(id)arg1 username:(id)arg2 nickname:(id)arg3 isAdvertiserUser:(_Bool)arg4;
+ (id)genAccessibilityLabel:(id)arg1;
+ (id)genContentUserStrFB:(id)arg1 username:(id)arg2 nickname:(id)arg3 isHBComment:(_Bool)arg4 isAdvertiserUser:(_Bool)arg5 isDeleteByFeedOwner:(_Bool)arg6 customColor:(id)arg7;
+ (id)genContentStrPrefixFB:(id)arg1 inDataItem:(id)arg2;
+ (id)genContentUserStr:(id)arg1 username:(id)arg2 nickname:(id)arg3 isHBComment:(_Bool)arg4 isAdvertiserUser:(_Bool)arg5 customColor:(id)arg6;
+ (id)genContentStrPrefix:(id)arg1 inDataItem:(id)arg2;
+ (id)contentTextColor:(id)arg1 defaultColor:(id)arg2;

@end

