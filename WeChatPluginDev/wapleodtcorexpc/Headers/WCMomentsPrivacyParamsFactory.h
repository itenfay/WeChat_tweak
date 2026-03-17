//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMomentsPrivacyParamsFactory : NSObject
{
}

+ (id)finderVisiblePrivacyText:(unsigned long long)arg1;
+ (id)finderParamsFromPrivacy:(unsigned long long)arg1 invisibleContactList:(id)arg2 invisibleTagNameList:(id)arg3 isAllContactsSelected:(_Bool)arg4;
+ (id)newTextStateParamsFromPrivacy:(long long)arg1 isPublishFirst:(_Bool)arg2 invisibleContactList:(id)arg3 invisibleContactTagList:(id)arg4;
+ (id)textStateParamsFromPrivacy:(long long)arg1 visibleContactList:(id)arg2 visibleTagNameList:(id)arg3 invisibleContactList:(id)arg4 invisibleTagNameList:(id)arg5 lastPrivacy:(long long)arg6 lastTagNameList:(id)arg7 lastContactList:(id)arg8 lastSelectTitle:(id)arg9;
+ (id)timelineParamsFromPrivacy:(long long)arg1 visibleContactList:(id)arg2 visibleTagNameList:(id)arg3 invisibleContactList:(id)arg4 invisibleTagNameList:(id)arg5;

@end

