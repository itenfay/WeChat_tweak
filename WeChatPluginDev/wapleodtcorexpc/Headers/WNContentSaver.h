//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WNContentSaver
{
}

+ (id)exportHTMLStringToData:(id)arg1;
+ (id)exportStringToTextData:(id)arg1;
+ (void)tryOpenCacheItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)saveTempWeNoteItemInContext:(id)arg1;
+ (void)clearCacheContent;
+ (id)getContextOfItem:(id)arg1;
+ (id)tryRemoveChatVoiceInFavItem:(id)arg1;
+ (void)saveHTML:(id)arg1 toFavItem:(id)arg2;
+ (id)saveWithContext:(id)arg1;

@end

