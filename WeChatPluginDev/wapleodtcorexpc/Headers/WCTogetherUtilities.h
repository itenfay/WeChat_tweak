//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCTogetherUtilities : NSObject
{
}

+ (id)containingIndexesFromDataItems:(id)arg1 withQueryIDs:(id)arg2;
+ (void)enumerateContainingDataItemFromDataItems:(id)arg1 withQueryIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (_Bool)containsTogetherUsername:(id)arg1 inDataItem:(id)arg2;
+ (_Bool)equalTogetherUsersWithDataItem1:(id)arg1 dataItem2:(id)arg2;
+ (void)adjustPrivacyForUploadTask:(id)arg1;

@end

