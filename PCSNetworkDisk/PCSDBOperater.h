//
//  PCSDBOperater.h
//  PCSNetworkDisk
//
//  Created by wangzz on 13-3-13.
//  Copyright (c) 2013年 hisunsray. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMDatabase.h"

/*!
 数据库创建脚本：
 CREATE TABLE "filelist" ("id" integer primary key  autoincrement  not null ,"name" text COLLATE NOCASE, "serverpath" text not null COLLATE NOCASE, "localpath" text COLLATE NOCASE,"size" integer, "property" integer, "hassubfolder" bool, "format" integer,"ctime" datetime, "mtime" datetime, "hascache" bool default 0,timestamp TimeStamp NOT NULL DEFAULT (datetime('now','localtime')));
 */

@class PCSFileInfoItem;
@interface PCSDBOperater : NSObject

@property(nonatomic,retain) FMDatabase  *PCSDB;

+(PCSDBOperater *) shareInstance;
- (BOOL)saveFileInfoItemToDB:(PCSFileInfoItem *)item;
@end