//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TextStateUtil : NSObject
{
}

+ (id)fetchFinderDataItemWithTid:(id)arg1 nonceId:(id)arg2;
+ (_Bool)enableComment;
+ (id)emojiInfoFromTextStatusEmojiInfo:(id)arg1;
+ (_Bool)disableDragToHoverForContact:(id)arg1;
+ (id)GetIconResourceTempPath;
+ (id)GetIconResourcePath;
+ (void)addShadowEffectToButton:(id)arg1;
+ (void)addShadowEffectToLabel:(id)arg1;
+ (id)defaultImageIdForNumber:(unsigned long long)arg1;
+ (id)defaultImageIdForTextStateId:(id)arg1;
+ (id)defaultImageForId:(id)arg1;
+ (id)randomDefaultImageId;
+ (id)hardcodedDefaultImageId;
+ (id)mergeSortInfosFromLikeInfos:(id)arg1 referenceInfos:(id)arg2;
+ (_Bool)isTextStateList:(id)arg1 changedComparedTo:(id)arg2;
+ (id)encodedBase64StringFromExtInfo:(id)arg1;
+ (id)decodedExtInfoFromBase64String:(id)arg1;

@end

