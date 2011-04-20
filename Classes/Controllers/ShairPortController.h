//
//  ShairPortController.h
//  This file is part of ShairPortMenu.
//
//  A Simple OS X GUI wrapper for ShairPort / HairTunes
//
//  Copyright 2011 Robert Carlsen.
//
//  ShairPortMenu is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ShairPortMenu is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with ShairPortMenu.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>
@class ShairPortModel;

@interface ShairPortController : NSObject {
    ShairPortModel *shairportModel;
    id delegate;
    
    NSTask *shairportTask;
    NSFileHandle *readFile;
}

@property(nonatomic,retain)NSTask *shairportTask;
@property(assign)id delegate;

-(void)setServerRunning:(BOOL)state;

@end

@protocol ShairPortControllerDelegate <NSObject>
-(void)shairPortStarted;
-(void)shairPortStopped;
@end